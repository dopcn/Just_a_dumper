//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface TRRuleStepParamType : NSObject
{
    BOOL typeId;
    long long defaultOperator;
    NSSet *supportedOperators;
}

+ (id)RULE_STEP_PARAM_APP_ID;
+ (id)RULE_STEP_PARAM_STRING_TO_FLOAT_MAPPING;
+ (id)RULE_STEP_PARAM_FLOAT;
+ (id)RULE_STEP_PARAM_COUNT;
+ (id)RULE_STEP_PARAM_BOOLEAN_INDICATION;
+ (id)RULE_STEP_PARAM_OBJECT_NAME;
+ (id)RULE_STEP_PARAM_DAY_TIME_FRAME;
+ (id)RULE_STEP_PARAM_RULE_TYPE;
+ (id)RULE_STEP_PARAM_CUSTOM_EVENT_TYPE;
+ (id)RULE_STEP_PARAM_TYPE_SESSION_COUNT;
+ (id)RULE_STEP_PARAM_TYPE_SECCONDS_PASSED;
+ (id)RULE_STEP_PARAM_TYPE_MINUTES_PASSED;
+ (id)RULE_STEP_PARAM_TYPE_PAGE_NAME;
+ (long long)operatorById:(BOOL)arg1;
+ (id)getById:(BOOL)arg1;
@property(retain, nonatomic) NSSet *supportedOperators; // @synthesize supportedOperators;
@property(nonatomic) long long defaultOperator; // @synthesize defaultOperator;
@property(nonatomic) BOOL typeId; // @synthesize typeId;
- (void).cxx_destruct;
- (id)initWithId:(BOOL)arg1 defaultOperator:(long long)arg2 supportedOperators:(id)arg3;

@end

