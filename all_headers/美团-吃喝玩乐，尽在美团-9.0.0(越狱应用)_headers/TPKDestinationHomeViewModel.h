//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NVWhiteBoard, RACSubject, TPKDestinationHomeLoader, TPKPOIDealQAParam;

@interface TPKDestinationHomeViewModel : NSObject
{
    _Bool _isDragRefreshing;
    _Bool _finishHeaderLoading;
    long long _destinationCityId;
    NSString *_redirectModule;
    NVWhiteBoard *_whiteBoard;
    NSString *_pageName;
    NSArray *_defaultModules;
    TPKPOIDealQAParam *_QAParam;
    TPKDestinationHomeLoader *_loader;
    RACSubject *_needReloadModulesSignal;
    RACSubject *_loadingStatusSignal;
    long long _loadingStatus;
}

@property(nonatomic) _Bool finishHeaderLoading; // @synthesize finishHeaderLoading=_finishHeaderLoading;
@property(nonatomic) _Bool isDragRefreshing; // @synthesize isDragRefreshing=_isDragRefreshing;
@property(nonatomic) long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(retain, nonatomic) RACSubject *loadingStatusSignal; // @synthesize loadingStatusSignal=_loadingStatusSignal;
@property(retain, nonatomic) RACSubject *needReloadModulesSignal; // @synthesize needReloadModulesSignal=_needReloadModulesSignal;
@property(retain, nonatomic) TPKDestinationHomeLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) TPKPOIDealQAParam *QAParam; // @synthesize QAParam=_QAParam;
@property(retain, nonatomic) NSArray *defaultModules; // @synthesize defaultModules=_defaultModules;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NVWhiteBoard *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(copy, nonatomic) NSString *redirectModule; // @synthesize redirectModule=_redirectModule;
@property(nonatomic) long long destinationCityId; // @synthesize destinationCityId=_destinationCityId;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)loadingStatusWithModules:(id)arg1 config:(id)arg2;
- (id)additionalModules;
- (id)moduleMap;
- (id)moduleInfoWithSingleConfig:(id)arg1 moduleClassConfig:(id)arg2;
- (id)buildModulesWithConfig:(id)arg1;
- (id)loadModuleConfigs;
- (void)bindSignal;
- (id)init;

@end

