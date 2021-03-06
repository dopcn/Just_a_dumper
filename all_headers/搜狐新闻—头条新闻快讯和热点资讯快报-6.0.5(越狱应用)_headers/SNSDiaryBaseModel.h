//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSArticleBaseModel.h"

@class NSDictionary, NSString;

@interface SNSDiaryBaseModel : SNSArticleBaseModel
{
    int _bilateral;
    NSString *_userId;
    NSString *_userName;
    NSString *_avatar;
    NSString *_contentDesc;
    NSDictionary *_uploadBody;
}

@property(retain, nonatomic) NSDictionary *uploadBody; // @synthesize uploadBody=_uploadBody;
@property(copy, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) int bilateral; // @synthesize bilateral=_bilateral;
@property(nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)getDescString;
- (_Bool)isAttention;
- (id)jsonWithArticleModel;
- (void)refreshWithDict:(id)arg1;
- (id)init;

@end

