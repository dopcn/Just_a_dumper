//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDDeviceUtil : NSObject
{
}

+ (long long)sumOfHighValue:(unsigned char)arg1 low:(unsigned char)arg2;
+ (unsigned char)checkSumWithData:(id)arg1;
+ (id)generateDeviceHardVersionFromData:(id)arg1;
+ (id)generateDeviceIDFromData:(id)arg1;
+ (id)ringInfoCommandData:(id)arg1;
+ (id)codBraUserInfoCommandData;
+ (id)userInfoCommandData;
+ (id)blTimeCommandData;
+ (id)timeCommandDataOfCodoonWeiXinWatch;
+ (id)timeCommandData;
+ (id)appendDataWithValidByte:(id)arg1;
+ (unsigned char)validByteOfByteArray:(id)arg1;

@end

