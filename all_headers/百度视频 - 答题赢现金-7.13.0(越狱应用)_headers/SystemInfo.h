//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SystemInfo : NSObject
{
    unsigned long long _sizeType;
    NSString *_os;
}

@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(nonatomic) unsigned long long sizeType; // @synthesize sizeType=_sizeType;
- (void)dealloc;

@end

