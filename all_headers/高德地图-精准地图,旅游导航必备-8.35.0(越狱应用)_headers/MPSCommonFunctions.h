//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSCommonFunctions : NSObject
{
}

+ (id)decodeObjectFromBase64:(id)arg1;
+ (id)encodeObjectToBase64:(id)arg1;
+ (id)decryptData:(id)arg1 keyStr:(id)arg2;
+ (id)encryptData:(id)arg1 keyStr:(id)arg2;
+ (id)distanceString:(long long)arg1;
+ (id)user_agent;
+ (id)Server;
+ (id)convertString:(char **)arg1 totalLen:(long long *)arg2;
+ (id)convertString:(char **)arg1;
+ (long long)convertShort:(char **)arg1;
+ (long long)convertInt:(char **)arg1;
+ (long long)convertByte:(char **)arg1;
+ (_Bool)convertBOOL:(char **)arg1;

@end

