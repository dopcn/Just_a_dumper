//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemAlbum;

@interface FBComposerSpacesPickerAlbumCellModel : FBValueObject <NSCopying>
{
    _Bool _selected;
    FBMemAlbum *_album;
}

@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) FBMemAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (id)initWithAlbum:(id)arg1 selected:(_Bool)arg2;

@end

