//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GalleryItemProtocol-Protocol.h"

@class NSString;

@interface SDWebGalleryItem : NSObject <GalleryItemProtocol>
{
    NSString *_sdWebURL;
    NSString *_sdWebThumbURL;
    NSString *_mediaURL;
    long long _mediaType;
    id _attachedRawInfo;
}

+ (id)itemWithMediaDefaultImage:(id)arg1 thumbImageURL:(id)arg2 mediaURL:(id)arg3 mediaType:(long long)arg4;
+ (id)itemWith:(id)arg1 thumbURL:(id)arg2;
@property(retain, nonatomic) id attachedRawInfo; // @synthesize attachedRawInfo=_attachedRawInfo;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSString *sdWebThumbURL; // @synthesize sdWebThumbURL=_sdWebThumbURL;
@property(retain, nonatomic) NSString *sdWebURL; // @synthesize sdWebURL=_sdWebURL;
- (void).cxx_destruct;
- (_Bool)galleryImageExists;
- (_Bool)galleryCanBeRestored;
- (_Bool)galleryCanSendToSNS;
- (_Bool)galleryCanSendToFriend;
- (_Bool)galleryHasOriginImage;
- (id)galleryCollectData;
- (id)galleryTransData;
- (id)galleryThumbImage;
- (long long)galleryOriginFileSize;
- (id)galleryFilepathForSave;
- (id)hdURL;
- (id)hdFilepath;
- (id)sdURL;
- (id)sdFilepath;
- (id)thumbURL;
- (id)thumbFilepath;
- (id)init;
- (id)initWithMediaType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

