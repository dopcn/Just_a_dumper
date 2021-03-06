//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class NSString, UIImage;
@protocol SDWebImageOperation;

@interface NVJsonViewAttachment : NSTextAttachment
{
    _Bool _needLoad;
    NSString *_url;
    NSString *_linkAction;
    NSString *_link;
    UIImage *_errorImage;
    id <SDWebImageOperation> _imageOperation;
}

@property(retain, nonatomic) id <SDWebImageOperation> imageOperation; // @synthesize imageOperation=_imageOperation;
@property(nonatomic) _Bool needLoad; // @synthesize needLoad=_needLoad;
@property(retain, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *linkAction; // @synthesize linkAction=_linkAction;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;

@end

