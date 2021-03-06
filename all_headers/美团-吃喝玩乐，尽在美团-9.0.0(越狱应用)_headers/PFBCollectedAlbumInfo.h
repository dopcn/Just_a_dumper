//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface PFBCollectedAlbumInfo : SAKDomainObject
{
    long long _albumID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageURLString;
    NSString *_author;
    NSString *_referenceURLString;
    long long _uniqueType;
}

+ (id)predicateDictionary;
@property(nonatomic) long long uniqueType; // @synthesize uniqueType=_uniqueType;
@property(copy, nonatomic) NSString *referenceURLString; // @synthesize referenceURLString=_referenceURLString;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long albumID; // @synthesize albumID=_albumID;
- (void).cxx_destruct;

@end

