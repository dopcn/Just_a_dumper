//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableArray, NSString;

@interface ShenGouInfoQs : NSObject <NSCoding>
{
    NSString *_shenGouZjzh;
    NSDate *_lastUseDate;
    NSMutableArray *_shenGouTable;
}

@property(retain, nonatomic) NSMutableArray *shenGouTable; // @synthesize shenGouTable=_shenGouTable;
@property(retain, nonatomic) NSDate *lastUseDate; // @synthesize lastUseDate=_lastUseDate;
@property(copy, nonatomic) NSString *shenGouZjzh; // @synthesize shenGouZjzh=_shenGouZjzh;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

