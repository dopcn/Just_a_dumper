//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SongInfo.h"

@class NSArray;

@interface GuessYourFavorSongInfo : SongInfo
{
    long long _cur_mark;
    long long _real_song_id;
    NSArray *_singerinfo;
    double _climax_timelength;
    double _climax_start_time;
    double _climax_end_time;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) double climax_end_time; // @synthesize climax_end_time=_climax_end_time;
@property(nonatomic) double climax_start_time; // @synthesize climax_start_time=_climax_start_time;
@property(nonatomic) double climax_timelength; // @synthesize climax_timelength=_climax_timelength;
@property(retain, nonatomic) NSArray *singerinfo; // @synthesize singerinfo=_singerinfo;
@property(nonatomic) long long real_song_id; // @synthesize real_song_id=_real_song_id;
@property(nonatomic) long long cur_mark; // @synthesize cur_mark=_cur_mark;
- (void).cxx_destruct;
- (void)copyFromDictonary:(id)arg1;
- (id)toDictionary;
- (id)init;

@end

