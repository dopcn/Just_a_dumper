//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNBaseJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, Optional><BDNUGCItemJSONModel, Optional><BDNUGCLableItemJSONModel;

@interface BDNGDUGCJsonModel : BDNBaseJSONModel
{
    NSNumber<Optional> *_comment;
    NSNumber<Optional> *_pic_comment_num;
    NSNumber<Optional> *_average_score;
    NSString<Optional> *_average_score_display;
    NSNumber<Optional> *_user_num;
    NSArray<Optional><BDNUGCLableItemJSONModel> *_expression_label;
    NSArray<Optional><BDNUGCItemJSONModel> *_label_detail_comment;
}

@property(retain, nonatomic) NSArray<Optional><BDNUGCItemJSONModel> *label_detail_comment; // @synthesize label_detail_comment=_label_detail_comment;
@property(retain, nonatomic) NSArray<Optional><BDNUGCLableItemJSONModel> *expression_label; // @synthesize expression_label=_expression_label;
@property(retain, nonatomic) NSNumber<Optional> *user_num; // @synthesize user_num=_user_num;
@property(retain, nonatomic) NSString<Optional> *average_score_display; // @synthesize average_score_display=_average_score_display;
@property(retain, nonatomic) NSNumber<Optional> *average_score; // @synthesize average_score=_average_score;
@property(retain, nonatomic) NSNumber<Optional> *pic_comment_num; // @synthesize pic_comment_num=_pic_comment_num;
@property(retain, nonatomic) NSNumber<Optional> *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;

@end

