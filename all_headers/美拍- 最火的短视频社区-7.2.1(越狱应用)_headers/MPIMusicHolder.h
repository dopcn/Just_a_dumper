//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MPIMusicHolder : NSObject
{
    _Bool _isFollowMode;
    NSURL *_fileURL;
    NSURL *_lyricURL;
    NSURL *_teachingMediaURL;
    unsigned long long _platformType;
    unsigned long long _musicId;
    NSString *_platformMusicId;
    NSString *_musicName;
    NSString *_coverPic;
    NSString *_singer;
    double _startTime;
    double _endTime;
    double _selectedTime;
}

+ (_Bool)copyTeachingMediaToResumeDirectoryWithLastPathComponent:(id)arg1;
+ (_Bool)copyLyricToResumeDirectoryWithLastPathComponent:(id)arg1;
+ (_Bool)copyMusicToResumeDirectoryWithLastPathComponent:(id)arg1;
+ (id)teachingMediaURLWithLastPathComponent:(id)arg1;
+ (id)lyricURLWithLastPathComponent:(id)arg1;
+ (id)musicURLWithLastPathComponent:(id)arg1;
+ (id)musicHolderWithResumeDict:(id)arg1;
@property(nonatomic) double selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *coverPic; // @synthesize coverPic=_coverPic;
@property(copy, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
@property(copy, nonatomic) NSString *platformMusicId; // @synthesize platformMusicId=_platformMusicId;
@property(nonatomic) unsigned long long musicId; // @synthesize musicId=_musicId;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSURL *teachingMediaURL; // @synthesize teachingMediaURL=_teachingMediaURL;
@property(retain, nonatomic) NSURL *lyricURL; // @synthesize lyricURL=_lyricURL;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool isFollowMode; // @synthesize isFollowMode=_isFollowMode;
- (void).cxx_destruct;
- (_Bool)hasTeachingMedia;
- (_Bool)hasLyric;
- (id)presentationMusicName;

@end

