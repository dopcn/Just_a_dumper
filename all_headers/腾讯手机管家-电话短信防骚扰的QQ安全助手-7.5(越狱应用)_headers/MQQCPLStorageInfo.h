//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MQQCPLStorageInfo : NSObject
{
    long long _totalSpace;
    long long _usedSpace;
}

@property(nonatomic) long long usedSpace; // @synthesize usedSpace=_usedSpace;
@property(nonatomic) long long totalSpace; // @synthesize totalSpace=_totalSpace;
@property(readonly, nonatomic) long long leftSpace;

@end

