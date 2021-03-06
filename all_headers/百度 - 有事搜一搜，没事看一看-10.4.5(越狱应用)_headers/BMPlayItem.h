//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface BMPlayItem : NSObject
{
    NSString *_trackID;
    long long _bitRate;
    NSString *_trackURL;
    NSString *_fileFormat;
    NSString *_original;
    NSNumber *_file_size;
    double _duration;
    NSString *_show_link;
    NSString *_song_file_id;
    NSNumber *_replay_gain;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSNumber *replay_gain; // @synthesize replay_gain=_replay_gain;
@property(copy, nonatomic) NSString *song_file_id; // @synthesize song_file_id=_song_file_id;
@property(copy, nonatomic) NSString *show_link; // @synthesize show_link=_show_link;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *file_size; // @synthesize file_size=_file_size;
@property(copy, nonatomic) NSString *original; // @synthesize original=_original;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(copy, nonatomic) NSString *trackURL; // @synthesize trackURL=_trackURL;
@property(nonatomic) long long bitRate; // @synthesize bitRate=_bitRate;
@property(copy, nonatomic) NSString *trackID; // @synthesize trackID=_trackID;
- (void).cxx_destruct;

@end

