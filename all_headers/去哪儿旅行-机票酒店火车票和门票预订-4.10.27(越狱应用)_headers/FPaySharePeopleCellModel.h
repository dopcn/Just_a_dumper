//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBaseCellModel.h"

@class FControlObject;

@interface FPaySharePeopleCellModel : FBaseCellModel
{
    _Bool _userInteractionEnabled;
    id _originDataItem;
    FControlObject *_nameObj;
    FControlObject *_phoneObj;
    FControlObject *_actionObj;
    FControlObject *_hintObj;
    struct UIEdgeInsets _actionImgEdgeInsets;
}

@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(retain, nonatomic) FControlObject *hintObj; // @synthesize hintObj=_hintObj;
@property(nonatomic) struct UIEdgeInsets actionImgEdgeInsets; // @synthesize actionImgEdgeInsets=_actionImgEdgeInsets;
@property(retain, nonatomic) FControlObject *actionObj; // @synthesize actionObj=_actionObj;
@property(retain, nonatomic) FControlObject *phoneObj; // @synthesize phoneObj=_phoneObj;
@property(retain, nonatomic) FControlObject *nameObj; // @synthesize nameObj=_nameObj;
@property(retain, nonatomic) id originDataItem; // @synthesize originDataItem=_originDataItem;
- (void).cxx_destruct;
- (id)init;

@end

