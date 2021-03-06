//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface Lyric : NSObject
{
    NSString *_saveTime;
    NSString *_version;
    long long _lyricCount;
    long long _lyricType;
    NSMutableArray *_sentencesArray;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_by;
    long long _offset;
    _Bool _isQrc;
}

@property(nonatomic) _Bool isQrc; // @synthesize isQrc=_isQrc;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *by; // @synthesize by=_by;
@property(retain, nonatomic) NSString *album; // @synthesize album=_album;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *sentencesArray; // @synthesize sentencesArray=_sentencesArray;
@property(nonatomic) long long lyricType; // @synthesize lyricType=_lyricType;
@property(nonatomic) long long lyricCount; // @synthesize lyricCount=_lyricCount;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *saveTime; // @synthesize saveTime=_saveTime;
- (void)dealloc;
- (id)init;

@end

