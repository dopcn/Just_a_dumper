//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class DRCCommentObjectModel, DRCCommentResultModel, NSMutableArray;
@protocol Optional;

@interface DRCEvaluationvoModel : JSONModel
{
    float _starRating;
    float _commentHeight;
    DRCCommentResultModel<Optional> *_result;
    DRCCommentObjectModel<Optional> *_object;
    unsigned long long _targetType;
    long long _state;
    long long _evaluationId;
    double _tableHeight;
    NSMutableArray *_commentsArray;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSMutableArray *commentsArray; // @synthesize commentsArray=_commentsArray;
@property(nonatomic) float commentHeight; // @synthesize commentHeight=_commentHeight;
@property(nonatomic) float starRating; // @synthesize starRating=_starRating;
@property(nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
@property(nonatomic) long long evaluationId; // @synthesize evaluationId=_evaluationId;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) DRCCommentObjectModel<Optional> *object; // @synthesize object=_object;
@property(retain, nonatomic) DRCCommentResultModel<Optional> *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

