//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LAURLManager : NSObject
{
}

+ (id)getHomeInfoURL:(id)arg1;
+ (id)getPhotoSyncFailLog:(id)arg1;
+ (id)getAlbumSyncFailLog:(id)arg1;
+ (id)getAlbumListNewMarkUnMark;
+ (id)getCheckNewMarkURL;
+ (id)getPhotoInfoURL:(id)arg1;
+ (id)getPhotoDeleteURL:(id)arg1;
+ (id)getPhotosUpdateURL:(id)arg1;
+ (id)getPhotosFullFetchURL:(id)arg1;
+ (id)getAlbumDeleteURL:(id)arg1;
+ (id)getAlbumsUpdateURL:(id)arg1;
+ (id)getAlbumsFullFetchURL:(id)arg1;
+ (id)cancelPhotoURL:(id)arg1;
+ (id)uploadPhotoURL:(id)arg1;
+ (id)modifyAlbumURL:(id)arg1;
+ (id)createAlbumURL:(id)arg1;
+ (id)urlWithPath:(id)arg1 param:(id)arg2 version:(id)arg3;
+ (id)queryFromDictionary:(id)arg1;
+ (id)escapeString:(id)arg1;
+ (id)baseURL;
+ (void)initialize;

@end

