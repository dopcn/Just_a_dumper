//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NVWhiteBoard, PFBHomeDisplayModel, RACSignal;

@interface PFBHomeDisplayManager : NSObject
{
    RACSignal *_dataRefreshedSignal;
    NSArray *_modules;
    NVWhiteBoard *_whiteBoard;
    PFBHomeDisplayModel *_model;
    NSMutableArray *_previousModuleNames;
}

@property(retain, nonatomic) NSMutableArray *previousModuleNames; // @synthesize previousModuleNames=_previousModuleNames;
@property(retain, nonatomic) PFBHomeDisplayModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NVWhiteBoard *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(copy, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(readonly, nonatomic) RACSignal *dataRefreshedSignal; // @synthesize dataRefreshedSignal=_dataRefreshedSignal;
- (void).cxx_destruct;
- (void)resetModulesWithModuleNames:(id)arg1;
- (void)updateDataSource;
- (id)initWithWhiteBoard:(id)arg1;

@end

