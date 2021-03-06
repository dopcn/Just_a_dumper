//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKGCBaseModuleViewModel.h"

@class HTKNumericFormatter, NSArray, NSMutableDictionary, RACSubject, TTKSubmitOrderContext, TTKTrain12306PassengerModel, TTKTrainDirect12306PassengerModel, TTKTrainLastPassengers, TTKTrainMTAgentPassengerModel;

@interface TTKPassengerViewModel : HTKGCBaseModuleViewModel
{
    _Bool _isFirstAddChild;
    _Bool _isDirect12306Schema;
    NSArray *_passengers;
    TTKTrainLastPassengers *_lastPassengers;
    TTKTrainMTAgentPassengerModel *_agentModel;
    TTKTrain12306PassengerModel *_MTModel;
    TTKTrainDirect12306PassengerModel *_direct12306Model;
    long long _orderType;
    RACSubject *_addPassengerSubject;
    RACSubject *_addChildSubject;
    NSMutableDictionary *_childrenNumberDict;
    HTKNumericFormatter *_identifyFormatter;
}

@property(nonatomic) _Bool isDirect12306Schema; // @synthesize isDirect12306Schema=_isDirect12306Schema;
@property(retain, nonatomic) HTKNumericFormatter *identifyFormatter; // @synthesize identifyFormatter=_identifyFormatter;
@property(retain, nonatomic) NSMutableDictionary *childrenNumberDict; // @synthesize childrenNumberDict=_childrenNumberDict;
@property(retain, nonatomic) RACSubject *addChildSubject; // @synthesize addChildSubject=_addChildSubject;
@property(retain, nonatomic) RACSubject *addPassengerSubject; // @synthesize addPassengerSubject=_addPassengerSubject;
@property(nonatomic) _Bool isFirstAddChild; // @synthesize isFirstAddChild=_isFirstAddChild;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) TTKTrainDirect12306PassengerModel *direct12306Model; // @synthesize direct12306Model=_direct12306Model;
@property(retain, nonatomic) TTKTrain12306PassengerModel *MTModel; // @synthesize MTModel=_MTModel;
@property(retain, nonatomic) TTKTrainMTAgentPassengerModel *agentModel; // @synthesize agentModel=_agentModel;
@property(retain, nonatomic) TTKTrainLastPassengers *lastPassengers; // @synthesize lastPassengers=_lastPassengers;
@property(retain, nonatomic) NSArray *passengers; // @synthesize passengers=_passengers;
- (void).cxx_destruct;
- (void)updatePassagers:(id)arg1;
- (double)bottomOffset;
- (id)model;
- (id)commonExtraDictForEdit:(_Bool)arg1;
- (id)filterChildren;
- (void)addAdultPassengerForChildren:(id)arg1;
- (id)buildListViewModel;
- (void)didFinishAddPassengerWithoutLogin:(id)arg1;
- (id)buildDetailViewModel;
- (void)deleteOnePassenger:(id)arg1;
- (void)deleteOnePassengerWithTips:(id)arg1;
- (void)addChild;
- (void)handleDirect12306AddPassengerClickEvent;
- (void)handleAddPassengerClickEvent;
- (_Bool)validatePassengerCount;
- (id)subTitleWithPassenger:(id)arg1;
- (id)attachedTitleWithPassenger:(id)arg1;
- (_Bool)shouldShowSingleBtn:(id)arg1;
- (void)buildResultsController;
- (void)dealloc;
- (void)bindDirect12306Data;
- (void)showLogin12306View;
- (void)bindNotification;
- (void)mgeAddChild;
- (void)mgeAddPassenger;
- (void)bindData;

// Remaining properties
@property(retain, nonatomic) TTKSubmitOrderContext *context;

@end

