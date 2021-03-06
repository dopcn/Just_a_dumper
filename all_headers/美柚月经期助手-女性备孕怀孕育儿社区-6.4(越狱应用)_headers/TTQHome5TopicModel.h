//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTopicModel.h"

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString, TTQTrendingImageSubjectModel;
@protocol TTQForumModel, TTQTrendingTextSubjectModel;

@interface TTQHome5TopicModel : TTQTopicModel <YYJSONHelperProtocol>
{
    NSString *_icon;
    long long _num;
    NSArray<TTQForumModel> *_forum_items;
    long long _position;
    TTQTrendingImageSubjectModel *_image_subject;
    NSArray<TTQTrendingTextSubjectModel> *_text_subject;
    NSString *_bi_uri;
}

@property(copy, nonatomic) NSString *bi_uri; // @synthesize bi_uri=_bi_uri;
@property(retain, nonatomic) NSArray<TTQTrendingTextSubjectModel> *text_subject; // @synthesize text_subject=_text_subject;
@property(retain, nonatomic) TTQTrendingImageSubjectModel *image_subject; // @synthesize image_subject=_image_subject;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSArray<TTQForumModel> *forum_items; // @synthesize forum_items=_forum_items;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (_Bool)is_special;

@end

