//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseVO.h"

@class NSMutableSet, NSNumber, NSString;

@interface PhotoVO : BaseVO
{
    NSNumber *_albumId;
    NSNumber *_photoAlbumId;
    NSNumber *_photoId;
    NSString *_photoName;
    NSString *_minUrl;
    NSString *_maxUrl;
    NSString *_shareContent;
    NSMutableSet *_auths;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_creator;
    NSNumber *_commentNum;
    NSNumber *_isComposed;
}

@property(retain, nonatomic) NSNumber *isComposed; // @synthesize isComposed=_isComposed;
@property(retain, nonatomic) NSNumber *commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableSet *auths; // @synthesize auths=_auths;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *maxUrl; // @synthesize maxUrl=_maxUrl;
@property(copy, nonatomic) NSString *minUrl; // @synthesize minUrl=_minUrl;
@property(copy, nonatomic) NSString *photoName; // @synthesize photoName=_photoName;
@property(retain, nonatomic) NSNumber *photoId; // @synthesize photoId=_photoId;
@property(retain, nonatomic) NSNumber *photoAlbumId; // @synthesize photoAlbumId=_photoAlbumId;
@property(retain, nonatomic) NSNumber *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)setAttributes:(id)arg1;

@end

