//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMYMusicAlbumItem : NSObject
{
    long long _mid;
    NSString *_title;
    NSString *_descs;
    NSString *_img;
    long long _play_times;
}

+ (void)initialize;
@property(nonatomic) long long play_times; // @synthesize play_times=_play_times;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *descs; // @synthesize descs=_descs;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)toAlbum;

@end

