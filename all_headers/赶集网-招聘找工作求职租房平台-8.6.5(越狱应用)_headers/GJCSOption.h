//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GJCSOption : NSObject
{
    NSString *_optionId;
    NSString *_optionText;
    NSString *_optionValue;
}

+ (id)optionWithId:(id)arg1 text:(id)arg2 value:(id)arg3;
+ (id)optionWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *optionValue; // @synthesize optionValue=_optionValue;
@property(copy, nonatomic) NSString *optionText; // @synthesize optionText=_optionText;
@property(copy, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;
- (id)description;

@end

