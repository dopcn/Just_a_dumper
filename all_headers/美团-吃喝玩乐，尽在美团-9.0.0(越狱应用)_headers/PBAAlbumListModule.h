//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class NSMutableArray, PBAAlbumListModel;

@interface PBAAlbumListModule : GCBaseModule
{
    _Bool _hasMore;
    _Bool _customStatus;
    long long _authorID;
    PBAAlbumListModel *_listModel;
    NSMutableArray *_listObjects;
    long long _listOffset;
}

@property(nonatomic) _Bool customStatus; // @synthesize customStatus=_customStatus;
@property(nonatomic, getter=isMore) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long listOffset; // @synthesize listOffset=_listOffset;
@property(retain, nonatomic) NSMutableArray *listObjects; // @synthesize listObjects=_listObjects;
@property(retain, nonatomic) PBAAlbumListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) long long authorID; // @synthesize authorID=_authorID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)needLoadMore;
- (void)loadListDataWithRefreshed:(_Bool)arg1;
- (void)setupModule;

@end

