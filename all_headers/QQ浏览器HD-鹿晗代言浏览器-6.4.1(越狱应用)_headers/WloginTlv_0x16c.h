//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSMutableDictionary;

@interface WloginTlv_0x16c : WloginTlv
{
    NSMutableDictionary *pskeyDic;
}

@property(retain) NSMutableDictionary *pskeyDic; // @synthesize pskeyDic;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

