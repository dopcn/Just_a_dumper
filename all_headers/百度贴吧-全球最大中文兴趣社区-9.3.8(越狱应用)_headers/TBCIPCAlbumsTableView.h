//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableView.h"

@class NSString, TBCIPCAlbumsDataSource;

@interface TBCIPCAlbumsTableView : TBCTableView
{
    TBCIPCAlbumsDataSource *_albumDataSource;
    NSString *_currentAlbumIdentifier;
}

@property(copy, nonatomic) NSString *currentAlbumIdentifier; // @synthesize currentAlbumIdentifier=_currentAlbumIdentifier;
@property(retain, nonatomic) TBCIPCAlbumsDataSource *albumDataSource; // @synthesize albumDataSource=_albumDataSource;
- (void)createDataSource;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)dealloc;

@end

