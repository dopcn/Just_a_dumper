//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FinderCellModelProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface FinderLastPageModel : NSObject <FinderCellModelProtocol, NSCoding>
{
    NSString *_alertText;
    NSString *_backColor;
}

@property(copy, nonatomic) NSString *backColor; // @synthesize backColor=_backColor;
@property(copy, nonatomic) NSString *alertText; // @synthesize alertText=_alertText;
- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
- (_Bool)isValidModel;
- (id)initWithArticleDetail:(id)arg1 backColor:(id)arg2;
- (id)initWithArticleDetail:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

