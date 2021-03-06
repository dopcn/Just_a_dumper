//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMutableCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface OliveappSessionManagerConfig : NSObject <NSMutableCopying>
{
    NSNumber *_totalActions;
    NSNumber *_actionOrderSeed;
    NSMutableArray *_actionList;
    NSNumber *_minPass;
    NSNumber *_maxFail;
    NSNumber *_timeoutMs;
    NSString *_modelPath;
    NSString *_actionSetConfig;
    NSString *_actionSetModelConfig;
    NSMutableArray *_candidateActionList;
    NSMutableDictionary *_actionGeneratorConfig;
    NSMutableDictionary *_sessionValidatorConfig;
    NSMutableDictionary *_facialActionConfig;
}

@property(retain) NSMutableDictionary *facialActionConfig; // @synthesize facialActionConfig=_facialActionConfig;
@property(retain) NSMutableDictionary *sessionValidatorConfig; // @synthesize sessionValidatorConfig=_sessionValidatorConfig;
@property(retain) NSMutableDictionary *actionGeneratorConfig; // @synthesize actionGeneratorConfig=_actionGeneratorConfig;
@property(retain) NSMutableArray *candidateActionList; // @synthesize candidateActionList=_candidateActionList;
@property(retain) NSString *actionSetModelConfig; // @synthesize actionSetModelConfig=_actionSetModelConfig;
@property(retain) NSString *actionSetConfig; // @synthesize actionSetConfig=_actionSetConfig;
@property(retain) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain) NSNumber *timeoutMs; // @synthesize timeoutMs=_timeoutMs;
@property(retain) NSNumber *maxFail; // @synthesize maxFail=_maxFail;
@property(retain) NSNumber *minPass; // @synthesize minPass=_minPass;
@property(retain) NSMutableArray *actionList; // @synthesize actionList=_actionList;
@property(retain) NSNumber *actionOrderSeed; // @synthesize actionOrderSeed=_actionOrderSeed;
@property(retain) NSNumber *totalActions; // @synthesize totalActions=_totalActions;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)usePredefinedConfig:(int)arg1;
- (_Bool)validate:(id *)arg1;
- (id)toJson;
- (id)init;

@end

