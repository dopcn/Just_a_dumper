//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AJXBaseNodeTree.h"

@class AJXNativeNodeTree, AJXNativeScrollModel, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface AJXListCellDataModel : AJXBaseNodeTree
{
    struct JsDomEvent *_domEvent;
    struct JsDomListCellData *_oriData;
    double _height;
    _Bool _isReady;
    long long _cellID;
    AJXListCellDataModel *_rootCellModel;
    NSMutableDictionary *_customEventDic;
    AJXNativeScrollModel *_scrollerModel;
    AJXNativeNodeTree *_frameModel;
    NSMutableArray *_updateEventsArray;
    NSMutableDictionary *_rootDic;
    NSDictionary *_styleDic;
}

@property(nonatomic) __weak NSDictionary *styleDic; // @synthesize styleDic=_styleDic;
@property(nonatomic) __weak NSMutableDictionary *rootDic; // @synthesize rootDic=_rootDic;
@property(retain, nonatomic) NSMutableArray *updateEventsArray; // @synthesize updateEventsArray=_updateEventsArray;
@property(retain, nonatomic) AJXNativeNodeTree *frameModel; // @synthesize frameModel=_frameModel;
@property(retain, nonatomic) AJXNativeScrollModel *scrollerModel; // @synthesize scrollerModel=_scrollerModel;
@property(retain, nonatomic) NSMutableDictionary *customEventDic; // @synthesize customEventDic=_customEventDic;
@property(nonatomic) __weak AJXListCellDataModel *rootCellModel; // @synthesize rootCellModel=_rootCellModel;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) long long cellID; // @synthesize cellID=_cellID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)clearCustomEvents;
- (_Bool)removeCustomEvent:(id)arg1;
- (_Bool)addCustomEvent:(id)arg1 value:(id)arg2;
- (_Bool)cellIsFirstApprea;
- (double)height;
- (_Bool)updateSize:(void *)arg1;
- (_Bool)updateProperty:(void *)arg1 isRemove:(_Bool)arg2;
- (_Bool)updateModel:(void *)arg1 isRemove:(_Bool)arg2 ajxCount:(id)arg3 hasChange:(_Bool *)arg4;
- (void)removeModelProperty:(id)arg1;
- (void)mergeStyleData;
- (void)freeEvents;
- (void)parseUpdateEvents;
- (id)parseData;
- (void)checkDataIsReady;
- (void)creatChild:(struct JsDomListCellData *)arg1;
- (id)presentationPropertyWithKey:(id)arg1;
- (void)setPresentationProperties:(id)arg1 syncEngine:(_Bool)arg2;
- (void)setPresentationProperties:(id)arg1;
- (id)relativeElement;
- (void)parseBasicInfoWithData:(void *)arg1 superTree:(id)arg2 rootCell:(id)arg3 styleDic:(id)arg4;
- (id)initWithData:(void *)arg1 superTree:(id)arg2 rootCell:(id)arg3 styleDic:(id)arg4 isLazyLoading:(_Bool)arg5;
- (void)updateWithData:(void *)arg1;
- (id)initWithData:(void *)arg1 superTree:(id)arg2 rootCell:(id)arg3 styleDic:(id)arg4;
- (id)initWithDomEvent:(void *)arg1 superTree:(id)arg2 rootCell:(id)arg3 styleDic:(id)arg4 isLazyLoading:(_Bool)arg5;
- (void)dealloc;

@end

