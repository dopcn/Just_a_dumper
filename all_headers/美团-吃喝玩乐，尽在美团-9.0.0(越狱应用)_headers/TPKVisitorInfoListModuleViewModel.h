//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

#import "TPKBaseModuleViewModelProtocol-Protocol.h"

@class HTKPersonalInfo, NSArray, NSMutableArray, NSString, NVBaseModuleSetting, NVWhiteBoard, RACCommand, RACSignal, RACSubject, SAKFetchedResultsController, TPKVisitorInfoListParam, TPKVisitorLoader;
@protocol NVBaseModuleMappingDelegate;

@interface TPKVisitorInfoListModuleViewModel : GCBaseModuleViewModel <TPKBaseModuleViewModelProtocol>
{
    _Bool _shouldShow;
    RACCommand *_cancelCommand;
    RACSignal *_cancelTextSignal;
    RACSignal *_confirmTextSignal;
    RACCommand *_confirmCommand;
    RACSignal *_titleSignal;
    RACSignal *_loadingStatusSignal;
    RACSubject *_showEditVcSignal;
    RACSubject *_showVisitorCountLimitSignal;
    SAKFetchedResultsController *_resultsController;
    RACCommand *_didSelectCommand;
    TPKVisitorLoader *_visitorLoader;
    long long _mLoadingStatus;
    NSMutableArray *_selectedItems;
    NSArray *_originVisitorItems;
    long long _selectedCount;
    unsigned long long _modifyType;
    NSMutableArray *_selectedVisitorIDs;
    NSArray *_commonAttributes;
    HTKPersonalInfo *_addPersonalInfo;
    TPKVisitorInfoListParam *_param;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TPKVisitorInfoListParam *param; // @synthesize param=_param;
@property(retain, nonatomic) HTKPersonalInfo *addPersonalInfo; // @synthesize addPersonalInfo=_addPersonalInfo;
@property(retain, nonatomic) NSArray *commonAttributes; // @synthesize commonAttributes=_commonAttributes;
@property(retain, nonatomic) NSMutableArray *selectedVisitorIDs; // @synthesize selectedVisitorIDs=_selectedVisitorIDs;
@property(nonatomic) unsigned long long modifyType; // @synthesize modifyType=_modifyType;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(retain, nonatomic) NSArray *originVisitorItems; // @synthesize originVisitorItems=_originVisitorItems;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(nonatomic) long long mLoadingStatus; // @synthesize mLoadingStatus=_mLoadingStatus;
@property(retain, nonatomic) TPKVisitorLoader *visitorLoader; // @synthesize visitorLoader=_visitorLoader;
@property(readonly, nonatomic) RACCommand *didSelectCommand; // @synthesize didSelectCommand=_didSelectCommand;
@property(retain, nonatomic) SAKFetchedResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(readonly, nonatomic) RACSubject *showVisitorCountLimitSignal; // @synthesize showVisitorCountLimitSignal=_showVisitorCountLimitSignal;
@property(readonly, nonatomic) RACSubject *showEditVcSignal; // @synthesize showEditVcSignal=_showEditVcSignal;
@property(readonly, nonatomic) RACSignal *loadingStatusSignal; // @synthesize loadingStatusSignal=_loadingStatusSignal;
@property(readonly, nonatomic) RACSignal *titleSignal; // @synthesize titleSignal=_titleSignal;
@property(readonly, nonatomic) RACCommand *confirmCommand; // @synthesize confirmCommand=_confirmCommand;
@property(readonly, nonatomic) RACSignal *confirmTextSignal; // @synthesize confirmTextSignal=_confirmTextSignal;
@property(readonly, nonatomic) RACSignal *cancelTextSignal; // @synthesize cancelTextSignal=_cancelTextSignal;
@property(readonly, nonatomic) RACCommand *cancelCommand; // @synthesize cancelCommand=_cancelCommand;
- (void).cxx_destruct;
- (void)dealloc;
- (id)loadData;
- (void)updatePersonalInfo:(id)arg1 commonAttributeArray:(id)arg2;
- (id)createEmptyPersonalInfo;
- (_Bool)isCheckWithPersonalInfo:(id)arg1;
- (void)updatedSelectedCount;
- (void)showEditWithVisitor:(id)arg1 editType:(unsigned long long)arg2;
- (void)handleEditWithEditSignals:(id)arg1;
- (void)updateCheckWithItem:(id)arg1;
- (id)buildResultsControllerWithAddInfo;
- (id)buildResultsControllerWithPersonalInfos:(id)arg1;
- (void)setupViewModel;

// Remaining properties
@property(nonatomic) _Bool createCellBeforeReload;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double footerHeight;
@property(readonly) unsigned long long hash;
@property(nonatomic) double headerHeight;
@property(nonatomic) _Bool hiddenModuleGroupLine;
@property(nonatomic) _Bool hiddenModuleMiddleLine;
@property(nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) RACSignal *jumpURLSignal;
@property(nonatomic) long long loadingMoreStatus;
@property(nonatomic) long long loadingStatus;
@property(nonatomic) __weak id <NVBaseModuleMappingDelegate> mappingDelegate;
@property(nonatomic) __weak NVBaseModuleSetting *moduleSetting;
@property(nonatomic) _Bool reloadWhenScrollEnd;
@property(readonly, nonatomic) RACCommand *showCellCommand;
@property(readonly) Class superclass;
@property(nonatomic) __weak NVWhiteBoard *whiteBoard;

@end

