//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface EGPageChangeInfoModel : NSObject <NSCoding>
{
    NSString *_pageStartTime;
    NSString *_pageEndTime;
    NSString *_pageName;
    NSString *_contentTag;
    NSDate *_recordDate;
}

@property(retain, nonatomic) NSDate *recordDate; // @synthesize recordDate=_recordDate;
@property(copy, nonatomic) NSString *contentTag; // @synthesize contentTag=_contentTag;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *pageEndTime; // @synthesize pageEndTime=_pageEndTime;
@property(copy, nonatomic) NSString *pageStartTime; // @synthesize pageStartTime=_pageStartTime;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

