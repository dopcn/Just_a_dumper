//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQPhoneNumberInfo : NSObject
{
    NSString *_numberString;
    NSString *_yellowpageName;
    long long _markType;
    unsigned long long _markCount;
}

+ (id)infoWithPhoneNumberString:(id)arg1;
@property(nonatomic) unsigned long long markCount; // @synthesize markCount=_markCount;
@property(nonatomic) long long markType; // @synthesize markType=_markType;
@property(copy, nonatomic) NSString *yellowpageName; // @synthesize yellowpageName=_yellowpageName;
@property(copy, nonatomic) NSString *numberString; // @synthesize numberString=_numberString;
- (void)dealloc;

@end

