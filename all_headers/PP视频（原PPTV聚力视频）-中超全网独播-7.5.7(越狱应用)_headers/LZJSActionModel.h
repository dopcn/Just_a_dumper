//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface LZJSActionModel : NSObject
{
    NSDictionary *_shareInfoDict;
    NSDictionary *_videoInfoDict;
    unsigned long long _actionType;
    NSString *_roomId;
    long long _collapsingType;
    NSString *_shareInfoJsonStr;
    NSString *_videoInfoJsonStr;
}

@property(retain, nonatomic) NSString *videoInfoJsonStr; // @synthesize videoInfoJsonStr=_videoInfoJsonStr;
@property(retain, nonatomic) NSString *shareInfoJsonStr; // @synthesize shareInfoJsonStr=_shareInfoJsonStr;
@property(nonatomic) long long collapsingType; // @synthesize collapsingType=_collapsingType;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *videoInfoDict; // @synthesize videoInfoDict=_videoInfoDict;
@property(readonly, nonatomic) NSDictionary *shareInfoDict; // @synthesize shareInfoDict=_shareInfoDict;
- (id)dictWithJsonStr:(id)arg1;

@end

