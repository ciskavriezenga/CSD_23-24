import time
import simpleaudio as sa


# ====================== functions ======================

# returns a list of event dictionaries, present it with a list of ts and the sample_id string
def create_events(ts_seq, sample_id):
    events = []
    for ts in ts_seq:
        events.append({"ts": ts, "sample_id": sample_id})
    return events


# returns timestamp from event, used for sorting events in a list
def get_ts(event):
    return event["ts"]


# ====================== create events and playback loop ======================

# list with a rhythmic sequence, in timestamps
# NOTE: harded coded list, this is only meant as an example!
ts_seq_high = [0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5]
ts_seq_mid = [1.0, 3.0, 3.25]
ts_seq_low = [0, 0.75, 2.0]


# load samples
samples = {}
samples["high"] = sa.WaveObject.from_wave_file("../assets/hihat.wav")
samples["mid"] = sa.WaveObject.from_wave_file("../assets/snare.wav")
samples["low"] = sa.WaveObject.from_wave_file("../assets/kick.wav")

# create event sequence
event_seq = []
event_seq += create_events(ts_seq_high, "high")
event_seq += create_events(ts_seq_mid, "mid")
event_seq += create_events(ts_seq_low, "low")

# orden events based on timestamp
event_seq.sort(key=get_ts)

# iterate through time sequence and play sample

time_zero = time.time()
play_seq = event_seq.copy()
event = play_seq.pop(0)
num_playback_times = 4

while num_playback_times:
    now = time.time() - time_zero
    # check if we need to play a sample
    if(now > event["ts"]):
        sample_id = event["sample_id"]
        samples[sample_id].play()
        if play_seq:
            event = play_seq.pop(0)
        else:
            #NOTE: a bit of duplicate code below, this is just an example
            time_zero = time.time()
            play_seq = event_seq.copy()
            event = play_seq.pop(0)
            time_zero = time.time()
    else:
        time.sleep(0.001)
