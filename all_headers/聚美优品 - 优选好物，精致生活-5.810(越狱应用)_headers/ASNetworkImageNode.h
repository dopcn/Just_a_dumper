//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASImageNode.h"

@class NSURL, NSUUID, UIImage;
@protocol ASImageCacheProtocol, ASImageDownloaderProtocol, ASNetworkImageNodeDelegate;

@interface ASNetworkImageNode : ASImageNode
{
    struct RecursiveMutex _lock;
    id <ASImageCacheProtocol> _cache;
    id <ASImageDownloaderProtocol> _downloader;
    id <ASNetworkImageNodeDelegate> _delegate;
    NSURL *_URL;
    UIImage *_defaultImage;
    NSUUID *_cacheUUID;
    id _imageDownload;
    _Bool _imageLoaded;
    _Bool _shouldCacheImage;
}

@property(nonatomic) _Bool shouldCacheImage; // @synthesize shouldCacheImage=_shouldCacheImage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncdisplaykit_asyncTransactionContainerStateDidChange;
- (void)_lazilyLoadImageIfNecessary;
- (void)_downloadImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cancelImageDownload;
- (void)fetchData;
- (void)clearFetchedData;
- (void)displayWillStart;
@property __weak id <ASNetworkImageNodeDelegate> delegate;
@property(retain) UIImage *defaultImage;
@property(retain) NSURL *URL;
- (void)setURL:(id)arg1 resetToDefault:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end

