//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NMFeedBackPOIInfoTaskDetailData : NSObject
{
    NSString *_poiId;
    NSString *_poiName;
    NSString *_longitude;
    NSString *_latitude;
    NSArray *_lines;
}

@property(copy, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (id)initWithTaskDetailInfo:(id)arg1;

@end

