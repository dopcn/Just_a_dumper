//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QYPPPubVideoClipsConfig : NSObject
{
    long long _topType;
    long long _subType;
    NSArray *_materialFilePaths;
    NSString *_lrcLocalPath;
    NSString *_musicLocalPath;
    NSArray *_recordTimes;
    NSString *_materialId;
    NSArray *_prompterArray;
    NSString *_desc;
    NSString *_materialSource;
    NSString *_videoMeta;
}

@property(copy, nonatomic) NSString *videoMeta; // @synthesize videoMeta=_videoMeta;
@property(copy, nonatomic) NSString *materialSource; // @synthesize materialSource=_materialSource;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSArray *prompterArray; // @synthesize prompterArray=_prompterArray;
@property(copy, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSArray *recordTimes; // @synthesize recordTimes=_recordTimes;
@property(copy, nonatomic) NSString *musicLocalPath; // @synthesize musicLocalPath=_musicLocalPath;
@property(copy, nonatomic) NSString *lrcLocalPath; // @synthesize lrcLocalPath=_lrcLocalPath;
@property(retain, nonatomic) NSArray *materialFilePaths; // @synthesize materialFilePaths=_materialFilePaths;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long topType; // @synthesize topType=_topType;
- (void).cxx_destruct;

@end

