//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ONESocketNtpList : NSObject
{
    unsigned int uCapacity;
    int uNtpListAdjustOffset;
    NSMutableArray *_itemList;
}

@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (int)clear;
- (int)itemWithSeqId:(unsigned long long)arg1 msgType:(unsigned int)arg2 timespec:(long long *)arg3;
- (int)addWithSeqId:(unsigned long long)arg1 msgType:(unsigned int)arg2;
- (id)initWithCapacity:(unsigned int)arg1;

@end

