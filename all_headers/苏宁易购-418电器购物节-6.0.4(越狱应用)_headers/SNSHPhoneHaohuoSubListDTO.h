//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SNSHPhoneHaohuoHgcontentDTO, SNSHPhoneHaohuoUserDTO;

@interface SNSHPhoneHaohuoSubListDTO : NSObject
{
    NSString *_unusualDescription;
    long long _enrollId;
    SNSHPhoneHaohuoHgcontentDTO *_hgContent;
    NSString *_activeTime;
    NSString *_planDownDate;
    NSString *_planPublishDate;
    NSString *_contentId;
    NSString *_imageUrl;
    NSString *_tag;
    NSString *_title;
    NSString *_userId;
    SNSHPhoneHaohuoUserDTO *_user;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) SNSHPhoneHaohuoUserDTO *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *planPublishDate; // @synthesize planPublishDate=_planPublishDate;
@property(copy, nonatomic) NSString *planDownDate; // @synthesize planDownDate=_planDownDate;
@property(copy, nonatomic) NSString *activeTime; // @synthesize activeTime=_activeTime;
@property(retain, nonatomic) SNSHPhoneHaohuoHgcontentDTO *hgContent; // @synthesize hgContent=_hgContent;
@property(nonatomic) long long enrollId; // @synthesize enrollId=_enrollId;
@property(copy, nonatomic) NSString *unusualDescription; // @synthesize unusualDescription=_unusualDescription;
- (void).cxx_destruct;

@end

