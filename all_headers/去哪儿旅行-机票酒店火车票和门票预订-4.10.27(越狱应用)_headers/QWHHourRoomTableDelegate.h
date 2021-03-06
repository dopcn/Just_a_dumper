//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QWHAdControlDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, UITableView;
@protocol QWHHourRoomTableControllerDelegate, QWHHourRoomTableDataSourceProtocol;

@interface QWHHourRoomTableDelegate : NSObject <QWHAdControlDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isAdReceived;
    _Bool _isAdFirstIn;
    id <QWHHourRoomTableDataSourceProtocol> _dataSource;
    id <QWHHourRoomTableControllerDelegate> _delegate;
    UITableView *_tableView;
    NSMutableDictionary *_readedStateDictionary;
    NSDictionary *_cellViewModelMapper;
    long long _lastSectionIndex;
}

@property(nonatomic) long long lastSectionIndex; // @synthesize lastSectionIndex=_lastSectionIndex;
@property(nonatomic) _Bool isAdFirstIn; // @synthesize isAdFirstIn=_isAdFirstIn;
@property(nonatomic) _Bool isAdReceived; // @synthesize isAdReceived=_isAdReceived;
@property(retain, nonatomic) NSDictionary *cellViewModelMapper; // @synthesize cellViewModelMapper=_cellViewModelMapper;
@property(retain, nonatomic) NSMutableDictionary *readedStateDictionary; // @synthesize readedStateDictionary=_readedStateDictionary;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <QWHHourRoomTableControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <QWHHourRoomTableDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)adControl:(id)arg1 updateState:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeReadedState;
- (void)registerCellForTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

