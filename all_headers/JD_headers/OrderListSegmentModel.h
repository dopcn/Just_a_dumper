//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface OrderListSegmentModel : JDModel
{
    _Bool _isHighLight;
    int _listID;
    NSString *_name;
    NSString *_functionID;
}

@property(nonatomic) int listID; // @synthesize listID=_listID;
@property(nonatomic) _Bool isHighLight; // @synthesize isHighLight=_isHighLight;
@property(retain, nonatomic) NSString *functionID; // @synthesize functionID=_functionID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

