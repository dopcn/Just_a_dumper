//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseTemplateModel.h"

@class NSDictionary, NSString;

@interface WBYPCommentViewModel : WBDetailBaseTemplateModel
{
    NSString *_bookNum;
    NSString *_commentNum;
    double _commentScore;
}

@property(nonatomic) double commentScore; // @synthesize commentScore=_commentScore;
@property(copy, nonatomic) NSString *commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *bookNum; // @synthesize bookNum=_bookNum;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSDictionary *actionDic;

@end

