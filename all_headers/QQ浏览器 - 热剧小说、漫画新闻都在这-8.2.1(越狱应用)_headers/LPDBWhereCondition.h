//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LPDBWhereCondition : NSObject
{
    NSString *_property;
    NSString *_operatorStr;
    id _value;
    _Bool _andCondition;
}

@property(nonatomic) _Bool andCondition; // @synthesize andCondition=_andCondition;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resultString;
- (id)initWithProperty:(id)arg1 Operator:(id)arg2 value:(id)arg3;

@end

