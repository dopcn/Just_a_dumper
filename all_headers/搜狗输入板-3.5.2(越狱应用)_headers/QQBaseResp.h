//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQBaseResp : NSObject
{
    NSString *result;
    NSString *errorDescription;
    int type;
    NSString *extendInfo;
}

@property(nonatomic) NSString *extendInfo; // @synthesize extendInfo;
@property(nonatomic) int type; // @synthesize type;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription;
@property(copy, nonatomic) NSString *result; // @synthesize result;

@end

