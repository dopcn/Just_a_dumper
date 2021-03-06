//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FALiveDidSingingDataProviderProtocol-Protocol.h"

@class FALiveSongSheetListModel, NSString;
@protocol FALiveDidSingingDataProviderDelegate;

@interface FALiveDidSingingDataProvider : NSObject <FALiveDidSingingDataProviderProtocol>
{
    _Bool _songSheetLoading;
    long long starKugouId;
    id <FALiveDidSingingDataProviderDelegate> delegate;
    FALiveSongSheetListModel *_songSheetList;
}

@property(nonatomic) _Bool songSheetLoading; // @synthesize songSheetLoading=_songSheetLoading;
@property(retain, nonatomic) FALiveSongSheetListModel *songSheetList; // @synthesize songSheetList=_songSheetList;
@property(nonatomic) __weak id <FALiveDidSingingDataProviderDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long starKugouId; // @synthesize starKugouId;
- (void).cxx_destruct;
- (void)requestDidSongList;
- (void)songListHandleInviteCount:(id)arg1;
- (void)songListHandleGiftSupportCount:(id)arg1;
- (id)didSingingListModel;
- (void)getDidSingingList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

