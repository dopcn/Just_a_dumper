//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol ImageDownloadManagerDelegate;

@interface ImageDownloadManager : NSObject
{
    _Bool _isLoading;
    id <ImageDownloadManagerDelegate> _delegate;
    NSMutableArray *_imageUrlArray;
    NSMutableArray *_downloadFailedUrlArray;
    unsigned long long _finishedImageCount;
}

@property(nonatomic) unsigned long long finishedImageCount; // @synthesize finishedImageCount=_finishedImageCount;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *downloadFailedUrlArray; // @synthesize downloadFailedUrlArray=_downloadFailedUrlArray;
@property(retain, nonatomic) NSMutableArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
@property(nonatomic) __weak id <ImageDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopDownloadImage;
- (void)startDownloadImage;
- (void)startDownloadFailedImage;
- (void)doAfterDownloadOneImage:(id)arg1 url:(id)arg2;
- (void)downloadImages:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

