//
//  AlbumViewController.h
//  NailSalon
//
//  Created by Alexandra Smau on 5/10/13.
//  Copyright (c) 2013 Newrosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlbumViewController : UIViewController
{
    IBOutlet UIScrollView *scroll;
    IBOutlet UIImageView *arrowLeft;
    IBOutlet UIImageView *arrowRight;
    NSMutableArray *alex_fairies;
}

- (IBAction)backClick:(id)sender;

@end
