//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface ShareOrderPCCommentDataModel : JDModel
{
    NSString *_resCode;
    NSString *_message;
    NSString *_commentScore;
    NSString *_commentData;
    NSString *_anonymousFlag;
}

@property(copy, nonatomic) NSString *anonymousFlag; // @synthesize anonymousFlag=_anonymousFlag;
@property(copy, nonatomic) NSString *commentData; // @synthesize commentData=_commentData;
@property(copy, nonatomic) NSString *commentScore; // @synthesize commentScore=_commentScore;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *resCode; // @synthesize resCode=_resCode;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

