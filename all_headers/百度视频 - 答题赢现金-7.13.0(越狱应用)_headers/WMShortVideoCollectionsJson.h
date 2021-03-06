//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDBasicData.h"

@class NSArray, NSString;

@interface WMShortVideoCollectionsJson : BDBasicData
{
    NSString *_ID;
    NSString *_title;
    unsigned long long _colorType;
    NSString *_imgUrl;
    NSString *_intro;
    NSArray *_videos;
}

+ (id)_parseTopicVideos:(id)arg1;
+ (unsigned long long)colorTypeWithColorString:(id)arg1;
@property(copy, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

