//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMMobBaseRequest.h"

@class NSString;

@interface JMFairyCirclePostGetCommentScoreRequest : JMMobBaseRequest
{
    NSString *_product_id;
    NSString *_verify_code;
    NSString *_comment;
    NSString *_img_num;
}

@property(copy, nonatomic) NSString *img_num; // @synthesize img_num=_img_num;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *verify_code; // @synthesize verify_code=_verify_code;
@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
- (void).cxx_destruct;
- (id)customResponse:(id)arg1;
- (id)subUri;
- (id)baseServerUrl;
@property(readonly, copy, nonatomic) NSString *uid;
@property(readonly, copy, nonatomic) NSString *token;
- (long long)httpType;

@end

