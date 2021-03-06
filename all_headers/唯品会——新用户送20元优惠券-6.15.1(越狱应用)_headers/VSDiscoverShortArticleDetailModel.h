//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSMutableAttributedString, NSNumber, NSString;
@protocol Optional;

@interface VSDiscoverShortArticleDetailModel : JSONModel
{
    NSNumber<Optional> *_article_id;
    NSString<Optional> *_articleTitle;
    NSString<Optional> *_uname;
    NSString<Optional> *_uimage;
    NSString<Optional> *_formatTime;
    NSString<Optional> *_greatNum;
    NSString<Optional> *_greatStatus;
    NSString<Optional> *_cover;
    NSString<Optional> *_coverbig;
    NSString<Optional> *_content;
    NSMutableAttributedString<Optional> *_attributedContent;
    NSArray<Optional> *_covers;
    NSString<Optional> *_coverImgSource;
    NSString<Optional> *_productCover;
    NSString<Optional> *_wapLink;
    NSString<Optional> *_shareId;
    NSDictionary<Optional> *_shortArticleProductInfo;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDictionary<Optional> *shortArticleProductInfo; // @synthesize shortArticleProductInfo=_shortArticleProductInfo;
@property(copy, nonatomic) NSString<Optional> *shareId; // @synthesize shareId=_shareId;
@property(copy, nonatomic) NSString<Optional> *wapLink; // @synthesize wapLink=_wapLink;
@property(copy, nonatomic) NSString<Optional> *productCover; // @synthesize productCover=_productCover;
@property(copy, nonatomic) NSString<Optional> *coverImgSource; // @synthesize coverImgSource=_coverImgSource;
@property(retain, nonatomic) NSArray<Optional> *covers; // @synthesize covers=_covers;
@property(retain, nonatomic) NSMutableAttributedString<Optional> *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *coverbig; // @synthesize coverbig=_coverbig;
@property(copy, nonatomic) NSString<Optional> *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString<Optional> *greatStatus; // @synthesize greatStatus=_greatStatus;
@property(copy, nonatomic) NSString<Optional> *greatNum; // @synthesize greatNum=_greatNum;
@property(copy, nonatomic) NSString<Optional> *formatTime; // @synthesize formatTime=_formatTime;
@property(copy, nonatomic) NSString<Optional> *uimage; // @synthesize uimage=_uimage;
@property(copy, nonatomic) NSString<Optional> *uname; // @synthesize uname=_uname;
@property(copy, nonatomic) NSString<Optional> *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(retain, nonatomic) NSNumber<Optional> *article_id; // @synthesize article_id=_article_id;
- (void).cxx_destruct;

@end

